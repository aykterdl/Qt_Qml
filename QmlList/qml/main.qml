import QtQuick 2.9
import QtQuick.Window 2.2

Window
{
	visible: true
	width: 500
	height: 500

	CarListModel
	{
		id: _carListModel

		CarList
		{
			brand: "Volkswagen Golf"
			driver: "Aykut Erdal"
			year: 2017
		}

		CarList
		{
			brand: "Mercedes S63 AMG"
			driver: "xxx"
			year: 2018
		}

		CarList
		{
			brand: "BMW M4 xDrive"
			driver: "yyy"
			year: 2017
		}
	}

	ListView
	{
		anchors.fill: parent
		model: _musicTrackModel
		delegate: Item{
			width: ListView.view.width
			height: 40

			Text{
				anchors.centerIn: parent
				font.bold: true

				text: "Arac: "+ dataObject.brand + "Surucu: "+ dataObject.Surucu
			}
		}
	}
}